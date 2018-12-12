//
// Created by cheetos on 12/12/18.
//

#pragma once

#include <random> // to get a float distribution
#include <chrono> // to geed the seed

namespace AcademyUtils
{
    class RandomFloatGenerator
    {
        private:
            std::default_random_engine r_engine;

        public:
            RandomFloatGenerator()
            {
                // generating a seed using actual time
                r_engine.seed(std::chrono::system_clock::now().time_since_epoch().count());
            }
            ~RandomFloatGenerator() { } // Destructor

            float get_random(int min, int max)
            {
                std::uniform_real_distribution<> dist(min, max);
                return dist(r_engine);
            }

    };
}