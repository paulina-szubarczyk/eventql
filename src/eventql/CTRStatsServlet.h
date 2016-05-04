/**
 * Copyright (c) 2015 - The CM Authors <legal@clickmatcher.com>
 *   All Rights Reserved.
 *
 * This file is CONFIDENTIAL -- Distribution or duplication of this material or
 * the information contained herein is strictly forbidden unless prior written
 * permission is obtained.
 */
#ifndef _CM_CTRSTATSSERVLET_H
#define _CM_CTRSTATSSERVLET_H
#include "eventql/util/VFS.h"
#include "eventql/util/http/httpservice.h"
#include "eventql/util/json/json.h"

using namespace stx;

namespace zbase {

/**
 *  GET /reports/ctr_by_page
 *
 *    params: customer, language, start_time, end_time, device_type..., test_group...
 *
 */
class CTRStatsServlet : public stx::http::HTTPService {
public:

  CTRStatsServlet(VFS* vfs);

  void handleHTTPRequest(
      stx::http::HTTPRequest* req,
      stx::http::HTTPResponse* res);

protected:
  VFS* vfs_;
};

}
#endif