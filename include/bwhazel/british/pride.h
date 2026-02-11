#ifndef BWHAZEL_BRITISH_PRIDE_H
#define BWHAZEL_BRITISH_PRIDE_H

/**
 * @file pride.h
 * @brief To show your British pride, for King and Country!
 * @warning It is critical to use the correct macro for the current monarch!  It is the responsibility of the developer to ensure it is correct and updates all code and subsequent releases appropriately and in a timely manner.  Failure to do so could be considered an act of treason.
 */

#ifdef __cplusplus
    /**
     * @brief For His Majesty the King!
     *
     * <b>British++</b>
     * @code{.cpp}
     * god_save_the_king;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * printf("God Save the King!\n");
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * std::cout << "God Save the King!" << std::endl;
     * @endcode
     */
    #define god_save_the_king std::cout << "God Save the King!" << std::endl

    /**
     * @brief For Her Majesty the Queen!
     *
     * <b>British++</b>
     * @code{.cpp}
     * god_save_the_queen;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * printf("God Save the Queen!\n");
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * std::cout << "God Save the Queen!" << std::endl;
     * @endcode
     */
    #define god_save_the_queen std::cout << "God Save the Queen!" << std::endl
#else
    /**
     * @brief For His Majesty the King!
     *
     * <b>British++</b>
     * @code{.cpp}
     * god_save_the_king;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * printf("God Save the King!\n");
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * std::cout << "God Save the King!" << std::endl;
     * @endcode
     */
    #define god_save_the_king printf("God Save the King!\n")

    /**
     * @brief For Her Majesty the Queen!
     *
     * <b>British++</b>
     * @code{.cpp}
     * god_save_the_queen;
     * @endcode
     * <b>C</b>
     * @code{.c}
     * printf("God Save the Queen!\n");
     * @endcode
     * <b>C++</b>
     * @code{.cpp}
     * std::cout << "God Save the Queen!" << std::endl;
     * @endcode
     */
    #define god_save_the_queen printf("God Save the Queen!\n")
#endif

#endif // BWHAZEL_BRITISH_PRIDE_H