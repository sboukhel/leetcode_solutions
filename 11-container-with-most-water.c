int maxArea(int* height, int heightSize) {
    int maxarea = 0;
    int i = 0;
    int k = heightSize - 1;
    while (i < k) {
        int width = k - i;
        int current_height;
        if (height[i] < height[k]) {
            current_height = height[i];
            i++;
        } else {
            current_height = height[k];
            k--;
        }
        int current_area = current_height * width;
        
        if (current_area > maxarea) {
            maxarea = current_area;
        }
    }
    return maxarea;
}
