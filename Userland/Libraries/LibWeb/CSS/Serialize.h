/*
 * Copyright (c) 2021, Sam Atkins <atkinssj@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/String.h>
#include <AK/StringBuilder.h>
#include <AK/StringView.h>

namespace Web::CSS {

void escape_a_character(StringBuilder&, u32 character);
void escape_a_character_as_code_point(StringBuilder&, u32 character);
void serialize_an_identifier(StringBuilder&, StringView const& ident);
void serialize_a_string(StringBuilder&, StringView const& string);
void serialize_a_url(StringBuilder&, StringView const& url);

String escape_a_character(u32 character);
String escape_a_character_as_code_point(u32 character);
String serialize_an_identifier(StringView const& ident);
String serialize_a_string(StringView const& string);
String serialize_a_url(StringView const& url);

}
