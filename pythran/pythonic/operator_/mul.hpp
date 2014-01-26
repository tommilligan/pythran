#ifndef PYTHONIC_OPERATOR_MUL_HPP
#define PYTHONIC_OPERATOR_MUL_HPP

#include "pythonic/utils/proxy.hpp"

namespace pythonic {

    namespace operator_ {

        template <class A, class B>
            auto mul(A const& a, B const& b) -> decltype(a*b) {
                return a*b;
            }
        PROXY(pythonic::operator_, mul);
    }

}

#endif

