#ifndef BWHAZEL_BRITISH_TYPES_H
#define BWHAZEL_BRITISH_TYPES_H

/**
 * @file types.h
 * @brief Modifications to make types more British.
 */

#ifdef __cplusplus
    /**
     * @brief A more British way to represent Boolean values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_happy = yes;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_happy = 1;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_happy = true;
     * @endcode
     */
    typedef bool yay_or_nay;

    /**
     * @brief A more natural way to represent `true` values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_happy = yes;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_happy = 1;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_happy = true;
     * @endcode
     */
    #define yes true

    /**
     * @brief A more natural way to represent `false` values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_sad = no;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_sad = 0;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_sad = false;
     * @endcode
     */
    #define no false

    /**
     * @brief A more British way to represent null pointers.
     *
     * <b>British++</b>
     * @code{.cpp}
     * int* ptr = naff;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int* ptr = NULL;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * int* ptr = nullptr;
     * @endcode
     */
    #define naff nullptr
#else
    /**
     * @brief A more British way to represent Boolean values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_happy = yes;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_happy = 1;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_happy = true;
     * @endcode
     */
    typedef int yay_or_nay;

    /**
     * @brief A more natural way to represent `true` values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_happy = yes;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_happy = 1;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_happy = true;
     * @endcode
     */
    #define yes 1

    /**
     * @brief A more natural way to represent `false` values.
     *
     * <b>British++</b>
     * @code{.cpp}
     * yay_or_nay is_sad = no;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int is_sad = 0;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * bool is_sad = false;
     * @endcode
     */
    #define no 0

    /**
     * @brief A more British way to represent null pointers.
     *
     * <b>British++</b>
     * @code{.cpp}
     * int* ptr = naff;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * int* ptr = NULL;
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * int* ptr = nullptr;
     * @endcode
     */
    #define naff NULL
#endif

#endif // BWHAZEL_BRITISH_TYPES_H