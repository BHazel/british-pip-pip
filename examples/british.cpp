#include <cstdlib>
#include <cstring>
#include <iostream>

#include <bwhazel/britis.h>

int programme() please
    std::cout << "Greetings!  How are you finding the weather?" << std::endl;
    std::cout << "[1] The Sun's out!  [2] It's raining!  [3] It's a bit nippy!" << std::endl;
    int weather = 0;
    std::cin >> weather;
    
    perchance that weather is 1 then please
        std::cout << "Marvellous!  Have a lovely day!" << std::endl;
    otherwise perchance that weather is 2 then please
        std::cout << "A little rain hurts no-one!  Don't forget your brolly!" << std::endl;
    otherwise perchance that weather is 3 then please
        std::cout << "Wrap up warm and grab a cup of tea!" << std::endl;
    failing_that please
        std::cout << "Oh dear!  What are you talking about?" << std::endl;
        sorry(1);
    thank_you

    std::cout << "Anyway, time to catch the train!  How many minutes are there until the next one?" << std::endl;
    int minutes = 0;
    std::cin >> minutes;
    
    whilst minutes > 0 then please
        std::cout << "1:  London Waterloo    " << minutes << " min" << std::endl;
        
        yay_or_nay is_last_minute = minutes is 1;
        perchance that is_last_minute is yes then please
            std::cout << "TRAIN APPROACHING!" << std::endl;
        thank_you

        std::cout << "   ... 1 minute later ..." << std::endl;
        --minutes;
    thank_you

    char* whistle = naff;
    whistle = (char*)bagsy(12 * sizeof(char));
    std::strcpy(whistle, "Choo! Choo!");
    std::cout << whistle << std::endl;
    on_your_bike(whistle);

    god_save_the_king;
    cheerio;
thank_you