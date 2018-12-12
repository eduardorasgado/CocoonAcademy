//
// Created by cheetos on 12/12/18.
//

#pragma once

#include <iostream>
#include <memory>

using namespace AcademyUtils;

namespace Testers
{
    class FloatRandomGeneratorTester
    {
        public:
            static bool testingFloatRandomGenerator()
            {
                // create an object to generate random distributions
                auto randomizer = std::make_shared<RandomFloatGenerator>();

                std::cout << "Creating 10 random floats different over compilation:" << std::endl;
                for (int i = 0; i < 10; ++i) {
                    std::cout << randomizer->get_random(5, 10) << std::endl;
                }
                return true;
            }
        private:
            FloatRandomGeneratorTester() { } // made static
    };
}