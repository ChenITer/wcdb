/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _WCDB_SYNTAXRESULTCOLUMN_HPP
#define _WCDB_SYNTAXRESULTCOLUMN_HPP

#include <WCDB/SyntaxIdentifier.hpp>

namespace WCDB {

namespace Syntax {

class ResultColumn final : public Identifier {
#pragma mark - Lang
public:
    Expression expression;
    String alias;
    bool wildcard = false;
    String table;

#pragma mark - Identifier
public:
    static constexpr const Type type = Type::ResultColumn;
    Type getType() const override final;
    String getDescription() const override final;
    void iterate(const Iterator& iterator, bool& stop) override final;
};

} // namespace Syntax

} // namespace WCDB

#endif /* _WCDB_SYNTAXRESULTCOLUMN_HPP */