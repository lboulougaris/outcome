/* Exception observers for outcome type
(C) 2017 Niall Douglas <http://www.nedproductions.biz/> (59 commits)
File Created: Oct 2017


Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License in the accompanying file
Licence.txt or at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.


Distributed under the Boost Software License, Version 1.0.
(See accompanying file Licence.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef OUTCOME_BASIC_OUTCOME_EXCEPTION_OBSERVERS_IMPL_HPP
#define OUTCOME_BASIC_OUTCOME_EXCEPTION_OBSERVERS_IMPL_HPP

#include "basic_outcome_exception_observers.hpp"

OUTCOME_V2_NAMESPACE_EXPORT_BEGIN

namespace detail
{
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::assume_exception() & noexcept
  {
    basic_outcome<R, S, P, NoValuePolicy> &self = static_cast<basic_outcome<R, S, P, NoValuePolicy> &>(*this);  // NOLINT
    NoValuePolicy::narrow_exception_check(self);
    return self._ptr;
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr const typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::assume_exception() const &noexcept
  {
    const basic_outcome<R, S, P, NoValuePolicy> &self = static_cast<const basic_outcome<R, S, P, NoValuePolicy> &>(*this);  // NOLINT
    NoValuePolicy::narrow_exception_check(self);
    return self._ptr;
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &&basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::assume_exception() && noexcept
  {
    basic_outcome<R, S, P, NoValuePolicy> &&self = static_cast<basic_outcome<R, S, P, NoValuePolicy> &&>(*this);  // NOLINT
    NoValuePolicy::narrow_exception_check(self);
    return static_cast<P &&>(self._ptr);
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr const typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &&basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::assume_exception() const &&noexcept
  {
    const basic_outcome<R, S, P, NoValuePolicy> &&self = static_cast<const basic_outcome<R, S, P, NoValuePolicy> &&>(*this);  // NOLINT
    NoValuePolicy::narrow_exception_check(self);
    return static_cast<P &&>(self._ptr);
  }

  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception() &
  {
    basic_outcome<R, S, P, NoValuePolicy> &self = static_cast<basic_outcome<R, S, P, NoValuePolicy> &>(*this);  // NOLINT
    NoValuePolicy::wide_exception_check(self);
    return self._ptr;
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr const typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception() const &
  {
    const basic_outcome<R, S, P, NoValuePolicy> &self = static_cast<const basic_outcome<R, S, P, NoValuePolicy> &>(*this);  // NOLINT
    NoValuePolicy::wide_exception_check(self);
    return self._ptr;
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &&basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception() &&
  {
    basic_outcome<R, S, P, NoValuePolicy> &&self = static_cast<basic_outcome<R, S, P, NoValuePolicy> &&>(*this);  // NOLINT
    NoValuePolicy::wide_exception_check(self);
    return static_cast<P &&>(self._ptr);
  }
  template <class Base, class R, class S, class P, class NoValuePolicy> inline constexpr const typename basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception_type &&basic_outcome_exception_observers<Base, R, S, P, NoValuePolicy>::exception() const &&
  {
    const basic_outcome<R, S, P, NoValuePolicy> &&self = static_cast<const basic_outcome<R, S, P, NoValuePolicy> &&>(*this);  // NOLINT
    NoValuePolicy::wide_exception_check(self);
    return static_cast<P &&>(self._ptr);
  }
}  // namespace detail

OUTCOME_V2_NAMESPACE_END

#endif
