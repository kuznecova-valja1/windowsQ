﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#define NOMINMAX
#include <Windows.h>
#include <AclAPI.h>
#include <appmodel.h>
#include <WinInet.h>
#include <sddl.h>
#include <Shlobj.h>
#include <Shlwapi.h>
#include <wow64apiset.h>
#include <icu.h>
#include <msi.h>
#include <DbgHelp.h>
#include <SoftPub.h>
#include <WinTrust.h>

#include "TraceLogging.h"

#define YAML_DECLARE_STATIC
#include <yaml.h>

// TODO: See if we can get down to having just one JSON parser...
#include <json/json.h>
#include <cpprest/json.h>

#pragma warning( push )
#pragma warning ( disable : 4458 4100 4702 6031 )
#include <valijson/schema.hpp>
#include <valijson/schema_parser.hpp>
#include <valijson/validator.hpp>
#include <valijson/adapters/jsoncpp_adapter.hpp>
#pragma warning( pop )

#include <algorithm>
#include <chrono>
#include <condition_variable>
#include <cwctype>
#include <filesystem>
#include <fstream>
#include <functional>
#include <future>
#include <iomanip>
#include <iterator>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <ostream>
#include <regex>
#include <set>
#include <string>
#include <sstream>
#include <stack>
#include <string_view>
#include <type_traits>
#include <vector>

#pragma warning( push )
#pragma warning ( disable : 6001 6285 6287 6340 6388 )
#include <wil/resource.h>
#include <wil/result.h>
#include <wil/result_macros.h>
#include <wil/safecast.h>
#include <wil/token_helpers.h>
#include <wil/com.h>
#pragma warning( pop )

#ifndef WINGET_DISABLE_FOR_FUZZING
#include <wil/cppwinrt.h>

#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.ApplicationModel.AppExtensions.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Cryptography.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.Profile.h>
#include <winrt/Windows.System.UserProfile.h>
#include <winrt/Windows.Web.Http.h>
#include <winrt/Windows.Web.Http.Headers.h>
#include <winrt/Windows.Web.Http.Filters.h>
#include <winrt/Windows.Globalization.h>

#endif

#include <wrl/client.h>
#include <wrl/implements.h>

// Stream/buffer helper APIs
#include <robuffer.h>
#include <shcore.h>

#include <AppxPackaging.h>
