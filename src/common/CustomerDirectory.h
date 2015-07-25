/**
 * Copyright (c) 2015 - The CM Authors <legal@clickmatcher.com>
 *   All Rights Reserved.
 *
 * This file is CONFIDENTIAL -- Distribution or duplication of this material or
 * the information contained herein is strictly forbidden unless prior written
 * permission is obtained.
 */
#pragma once
#include <stx/stdtypes.h>
#include <common/CustomerConfig.h>

using namespace stx;

namespace cm {

class CustomerDirectory {
public:

  RefPtr<CustomerConfigRef> configFor(const String& customer_key);

  void updateCustomerConfig(CustomerConfig config);

protected:
  std::mutex mutex_;
  HashMap<String, RefPtr<CustomerConfigRef>> customers_;
};

} // namespace cm