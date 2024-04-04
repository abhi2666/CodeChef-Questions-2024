int squares(int a, int b) {
    int cnt = 0;
    int start = ceil(sqrt(a)); // Start from the smallest integer whose square is >= a
    int end = floor(sqrt(b));  // End at the largest integer whose square is <= b
    for(int i = start; i <= end; i++){
        int square = i * i;
        if(square >= a && square <= b) cnt++;
    }
    return cnt;
}