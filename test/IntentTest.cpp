#include "../TypeofIntent.h"
#include <gtest/gtest.h>

class IntentTypeTest : public ::testing::Test {
protected:
    IntentTypeTest() {}
    virtual ~IntentTypeTest() {}
    virtual void SetUp() {}
    virtual void TearDown() {}
};

// Get Weather
TEST(IntentTypeTest, intentGetWeather1)
{
    CIntentType type("What is the weather like tomorrow");
    ASSERT_EQ(type.getType(), "Get Weather");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "tomorrow");
}

TEST(IntentTypeTest, intentGetWeather2)
{
    CIntentType type("What is the Forecast for next week?");
    ASSERT_EQ(type.getType(), "Get Weather");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "next week");
}

TEST(IntentTypeTest, intentGetWeather3)
{
    CIntentType type("whats the forecast today?");
    ASSERT_EQ(type.getType(), "Get Weather");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "today");
}

TEST(IntentTypeTest, intentGetWeather4)
{
    CIntentType type("I Would like to know the weather today.");
    ASSERT_EQ(type.getType(), "Get Weather");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "today");
}

//Get Weather City
TEST(IntentTypeTest, intentGetWeatherCity1)
{
    CIntentType type("What is the weather like tomorrow in Berlin?");
    ASSERT_EQ(type.getType(), "Get Weather City");
    ASSERT_EQ(type.getCity(), "berlin");
    ASSERT_EQ(type.getTime(), "tomorrow");
}

TEST(IntentTypeTest, intentGetWeatherCity2)
{
    CIntentType type("What is the weather going to be like in Frankfurt today?");
    ASSERT_EQ(type.getType(), "Get Weather City");
    ASSERT_EQ(type.getCity(), "frankfurt");
    ASSERT_EQ(type.getTime(), "today");
}

TEST(IntentTypeTest, intentGetWeatherCity3)
{
    CIntentType type("What is the forecast in london for next sunday?");
    ASSERT_EQ(type.getType(), "Get Weather City");
    ASSERT_EQ(type.getCity(), "london");
    ASSERT_EQ(type.getTime(), "next sunday");
}

TEST(IntentTypeTest, intentGetWeatherCity4)
{
    CIntentType type("I Would like to know the weather in Binyamina");
    ASSERT_EQ(type.getType(), "Get Weather City");
    ASSERT_EQ(type.getCity(), "binyamina");
    ASSERT_EQ(type.getTime(), "");
}

//Get Fact
TEST(IntentTypeTest, intentGetFact1)
{
    CIntentType type("Tell me an interesting fact.");
    ASSERT_EQ(type.getType(), "Get Fact");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "");
}

TEST(IntentTypeTest, intentGetFact2)
{
    CIntentType type("Tell me something I don't know.");
    ASSERT_EQ(type.getType(), "Get Fact");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "");
}

TEST(IntentTypeTest, intentGetFact3)
{
    CIntentType type("I want to know something new.");
    ASSERT_EQ(type.getType(), "Get Fact");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "");
}

//Intent Not Found
TEST(IntentTypeTest, intentIntentNotFound)
{
    CIntentType type("Is it true that mangos are delicious?");

    ASSERT_EQ(type.getType(), "Intent Not Found");
    ASSERT_EQ(type.getCity(), "");
    ASSERT_EQ(type.getTime(), "");
}