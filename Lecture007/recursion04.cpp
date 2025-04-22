// leet code

// climb stairs
// ek ladka hai jo ki 1st sidi pr khda hai vo 7th sidhi par jana chahata hai ladka ek baar mei ya to 1 sidhi chad skta hai ya 2 sidhi chad skta hai 7th sidhi tak pahuchne ke liye kitne time sidhi chadni hogi

    //                                                     7.--------
    //                                             6.--------- countDistinctWayToClimbStair(nStairs-1)
    //                                    5.--------countDistinctWayToClimbStair(nStairs-2)
    //                          4.--------
    //                  3.--------
    //         2.-------
    // 1.--------   

int countDistinctWayToClimbStair(long long nStairs)
{

    //base case

    if(nStairs < 0) // 1st sidhi se niche to koi sidhi hogi nahi
    return 0;

    if(nStairs == 0) // 1st par ladka kada hai to 0 return kar do
    return 1;

    return countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2);

}