#ifndef BWHAZEL_BRITISH_CORE_H
#define BWHAZEL_BRITISH_CORE_H

/**
 * @file core.h
 * @brief Core syntax modifications to make your code more British!
 */

/**
 * @brief British alternative to the main entry point.
 * @warning The spelling is correct!  We invented the language!
 *
 * <b>British++</b>
 * @code{.cpp}
 * int programme() please // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * int main() { // ...
 * @endcode
 */
#define programme main

/**
 * @brief A more British way to start an `if` block.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) { // ...
 * @endcode
 */
#define perchance if

/**
 * @brief A more natural way to start an `if`/`perchance` condition.
 * @note This is intended to be used in conjunction with `perchance` and `otherwise`.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) { // ...
 * @endcode
 */
#define that (

/**
 * @brief A more natural way to close an `if`/`perchance` or `while`/`whilst` condition.
 * @note This is intended to be used in conjunction with `perchance`, `otherwise`, and `whilst`.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) { // ...
 * @endcode
 */
#define then )

/**
 * @brief A more British, and polite, way to open a block of code.
 * @warning If usage of British++ is limited, this, along with `thank_you` should be considered the absolute minimum.
 * @note This is intended to be used in conjunction with `thank_you`.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) { // ...
 * @endcode
 */
#define please {

/**
 * @brief A more natural way to open an `else if` block.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please
 *     // ...
 * otherwise perchance that x < 0 then please
 *    // ...
 * thank_you
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) {
 *     // ...
 * } else if (x < 0) {
 *     // ...
 * }
 * @endcode
 */
#define otherwise } else

/**
 * @brief A more natural way to open an `else` block.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please
 *     // ...
 * failing_that please
 *     // ...
 * thank_you
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) {
 *     // ...
 * } else {
 *     // ...
 * }
 * @endcode
 */
#define failing_that } else

/**
 * @brief A more British, and polite, way to close a block of code.
 * @warning If usage of British++ is limited, this, along with `please` should be considered the absolute minimum.
 * @note This is intended to be used in conjunction with `please`.
 *
 * <b>British++</b>
 * @code{.cpp}
 * perchance that x > 0 then please
 *     // ...
 * thank_you
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x > 0) {
 *     // ...
 * }
 * @endcode
 */
#define thank_you }

/**
 * @brief A more British way to start a `while` loop.
 *
 * <b>British++</b>
 * @code{.cpp}
 * int counter {};
 * whilst counter < 10 then please
 *     // ...
 * thank_you
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * int counter {};
 * while (counter < 10) {
 *     // ...
 * }
 * @endcode
 */
#define whilst while (

/**
 * @brief A friendlier British way to end the programme.
 *
 * <b>British++</b>
 * @code{.cpp}
 * cheerio;
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * return 0;
 * @endcode
 */
#define cheerio return 0

/**
 * @brief Returns with an error code in a more British, and polite, way.
 * @param error The error code to return.
 * @warning As this breaks the flow of the programme, it is necessary to apologise regardless of user action.
 *
 * <b>British++</b>
 * @code{.cpp}
 * sorry(1);
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * return 1;
 * @endcode
 */
#define sorry(error) return error;

/**
 * @brief A more natural way to compare values for equality.
 *
 * <b>British++</b>
 * @code{.cpp}
 * if (x is 5) { // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x == 5) { // ...
 * @endcode
 */
#define is ==

/**
 * @brief A more natural way to compare values for inequality.
 *
 * <b>British++</b>
 * @code{.cpp}
 * if (x isnt 5) { // ...
 * @endcode
 * <b>C, C++</b>
 * @code{.cpp}
 * if (x != 5) { // ...
 * @endcode
 */
#define isnt !=

#endif // BWHAZEL_BRITISH_CORE_H