/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "suite_connector_ability.h"
#include "suite-connector.h"

#include <string>
#include "hilog/log.h"
#include "system_ability_definition.h"

using namespace OHOS::HiviewDFX;

namespace OHOS {
namespace {
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD001800, "SuiteConnectorAbility"};
}

REGISTER_SYSTEM_ABILITY_BY_ID(SuiteConnectorAbility, 20000, true);

SuiteConnectorAbility::SuiteConnectorAbility(int32_t saId, bool runOnCreate) : SystemAbility(saId, runOnCreate)
{
    HiLog::Info(LABEL, "SuiteConnectorAbility()");
}

SuiteConnectorAbility::~SuiteConnectorAbility()
{
    HiLog::Info(LABEL, "~SuiteConnectorAbility()");
}

void SuiteConnectorAbility::OnStart()
{
    HiLog::Info(LABEL, "OnStart()");
    bool res = Publish(this);
    if (!res) {
        HiLog::Error(LABEL, "publish failed!");
        return;
    }
    
    GoString configFile = {"/etc/suite-connector/config.json", 32};
    StartSuiteConnector(configFile);
}

void SuiteConnectorAbility::OnAddSystemAbility(int32_t systemAbilityId, const std::string& deviceId)
{
    HiLog::Info(LABEL, "OnAddSystemAbility systemAbilityId:%{public}d added!", systemAbilityId);
}

void SuiteConnectorAbility::OnRemoveSystemAbility(int32_t systemAbilityId, const std::string& deviceId)
{
    HiLog::Info(LABEL, "OnRemoveSystemAbility systemAbilityId:%{public}d removed!", systemAbilityId);
}
}
