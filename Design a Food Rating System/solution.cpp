#include <bits/stdc++.h>
using namespace std;

class FoodRatings {
public:
    // food -> {cuisine, rating}
    unordered_map<string, pair<string, int>> foodMap;

    // cuisine -> ordered set of { -rating, food }
    unordered_map<string, set<pair<int, string>>> cuisineMap;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            string food = foods[i];
            string cuisine = cuisines[i];
            int rating = ratings[i];

            foodMap[food] = {cuisine, rating};
            cuisineMap[cuisine].insert({-rating, food});
        }
    }
    
    void changeRating(string food, int newRating) {
        auto [cuisine, oldRating] = foodMap[food];

        // Remove old entry
        cuisineMap[cuisine].erase({-oldRating, food});

        // Insert new entry
        cuisineMap[cuisine].insert({-newRating, food});

        // Update in foodMap
        foodMap[food].second = newRating;
    }
    
    string highestRated(string cuisine) {
        // First element in set = highest rating, lexicographically smallest
        return cuisineMap[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
