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

#ifndef SAFWK_KANTO_ISUITE_CONNECTOR_ABILITY_H_
#define SAFWK_KANTO_ISUITE_CONNECTOR_ABILITY_H_

#include "iremote_broker.h"

namespace OHOS {
class ISuiteConnectorAbility : public IRemoteBroker {
public:
    DECLARE_INTERFACE_DESCRIPTOR(u"OHOS.kanto.ISuiteConnectorAbility");
};
}
#endif /* SAFWK_KANTO_ISUITE_CONNECTOR_ABILITY_H_ */
