/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file
 *   This file implements the handler for data model messages.
 */

#include "esp_log.h"
#include <system/SystemPacketBuffer.h>

#include "DataModelHandler.h"
#include "LEDWidget.h"

extern "C" {
#include "attribute-storage.h"
#include "chip-zcl/chip-zcl-zpro-codec.h"
#include "gen/attribute-id.h"
#include "gen/cluster-id.h"
#include "gen/znet-bookkeeping.h"
#include "util.h"
}

using namespace ::chip;

static const char * TAG = "data_model_server";

void InitDataModelHandler()
{
    emberAfEndpointConfigure();
    emAfInit();
}

void HandleDataModelMessage(System::PacketBuffer * buffer)
{
    EmberApsFrame frame;
    bool ok = extractApsFrame(buffer->Start(), buffer->DataLength(), &frame);
    if (ok)
    {
        ESP_LOGI(TAG, "APS frame processing success!");
    }
    else
    {
        ESP_LOGI(TAG, "APS frame processing failure");
        System::PacketBuffer::Free(buffer);
        return;
    }

    // FIXME: Callee needs to be told the buffer length, so it can fail out if
    // we don't have enough buffer!!!
    void * raw_message;
    uint32_t messageLen = extractMessage(buffer->Start(), &raw_message);
    auto message        = static_cast<uint8_t *>(raw_message);

    ok = emberAfProcessMessage(&frame,
                               0, // type
                               message, messageLen,
                               0, // source node id
                               NULL);

    System::PacketBuffer::Free(buffer);

    if (ok)
    {
        ESP_LOGI(TAG, "Data model processing success!");
    }
    else
    {
        ESP_LOGI(TAG, "Data model processing failure");
    }
}
