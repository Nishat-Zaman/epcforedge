/*******************************************************************************
* Copyright 2019 Intel Corporation. All rights reserved.
*
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
*******************************************************************************/
/**
 * @file  PostRequestDispatcher.h
 * @brief Header file for PostRequestDispatcher
 ********************************************************************/

#ifndef __OAMAGENT__JSONREQUESTDISPATCHER__
#define __OAMAGENT__JSONREQUESTDISPATCHER__

#include "PostRequestHandler.h"
#include <stdio.h>
#include <json/json.h>
#include <map>

using namespace std;

class PostRequestDispatcher
{
    map<string, PostRequestHandler *> requestHandlers;
public:
    /**
     * @brief        Dispatches a POST-method request holding JSON-formatted request data to corresponding handler(s).
     * @param[in]    action      A target handler's designation, as part of the URL.
     * @param[in]    request     JSON-formatted request data.
     * @param[out]   response    A JSON-formatted key-value pair indicating the response.
     * @param[out]   headers     Header of response.
     * @param[in]    cookies     Cookies in request.
     * @throw        Exception   Thrown on failure.
     * @return       void
     */
    void dispatchRequest(const string &action, Json::Value &request, Json::Value &response, map<string, string> &headers, map<string, string> &cookies);
    /**
     * @brief        Links a handler to a URL.
     * @param[in]    action      A designation to assign to a handler, so that requests may be dispatched to the handler using that designation as a part of requests' URL.
     * @param[in]    handler     An handler to be linked to the action.
     * @return       void
     */
    void registerHandler(const string &action, PostRequestHandler &handler);
};

#endif /* defined(__OAMAGENT__JSONREQUESTDISPATCHER__) */
