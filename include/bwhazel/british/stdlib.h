#ifndef BWHAZEL_BRITISH_STDLIB_H
#define BWHAZEL_BRITISH_STDLIB_H

/**
 * @file stdlib.h
 * @brief British-isms of standard library modifications.
 */

#ifdef __cplusplus
    /**
    * @brief A more British way to allocate, i.e. "bag", memory.
    * @note When using C++ this is intended to be used with the `<cstdlib>` header.
    *
    * <b>British++</b>
    * @code{.cpp}
    * ptr = bagsy(sizeof(int));
    * @endcode
    * <b>C</b>
    * @code{.c}
    * ptr = malloc(sizeof(int));
    * @endcode
    * <b>C++</b>
    * @code{.cpp}
    * ptr = std::malloc(sizeof(int));
    * @endcode
    */
    #define bagsy std::malloc

    /**
    * @brief A more British way to free memory, i.e. telling it to be on its way.
    * @note When using C++ this is intended to be used with the `<cstdlib>` header.
    *
    * <b>British++</b>
    * @code{.cpp}
    * on_your_bike(ptr);
    * @endcode
    * <b>C</b>
    * @code{.c}
    * free(ptr);
    * @endcode
    * <b>C++</b>
    * @code{.cpp}
    * std::free(ptr);
    * @endcode
    */
    #define on_your_bike std::free
#else
    /**
    * @brief A more British way to allocate, i.e. "bag", memory.
    * @note When using C++ this is intended to be used with the `<cstdlib>` header.
    *
    * <b>British++</b>
    * @code{.cpp}
    * ptr = bagsy(sizeof(int));
    * @endcode
    * <b>C</b>
    * @code{.c}
    * ptr = malloc(sizeof(int));
    * @endcode
    * <b>C++</b>
    * @code{.cpp}
    * ptr = std::malloc(sizeof(int));
    * @endcode
    */
    #define bagsy malloc

    /**
    * @brief A more British way to free memory, i.e. telling it to be on its way.
    * @note When using C++ this is intended to be used with the `<cstdlib>` header.
    *
    * <b>British++</b>
    * @code{.cpp}
    * on_your_bike(ptr);
    * @endcode
    * <b>C</b>
    * @code{.c}
    * free(ptr);
    * @endcode
    * <b>C++</b>
    * @code{.cpp}
    * std::free(ptr);
    * @endcode
    */
    #define on_your_bike free
#endif

#endif // BWHAZEL_BRITISH_STDLIB_H