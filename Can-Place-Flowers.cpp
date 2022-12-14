class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int canPlant = 0;
        for (int i = 0; i < flowerbed.size(); i++){
            if (flowerbed[i] == 0){ 
                if (i == 0) {
                    if (flowerbed.size() == 1) {
                        canPlant++;
                    } else if (flowerbed[i + 1] == 0){
                        canPlant++;
                        flowerbed[i] = 1;
                    }
                } else if (i == flowerbed.size() - 1) {
                    if (flowerbed[i - 1] == 0) {
                        canPlant++;
                        flowerbed[i] = 1;
                    }
                }
                else {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
                        canPlant++;
                        flowerbed[i] = 1;
                    }
                }
            }
        }

        if (canPlant >= n){
            return true;
        }
        return false;
    }
};
