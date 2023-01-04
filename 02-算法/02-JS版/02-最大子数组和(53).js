/**
 * @Author liming
 * @Date 2023/1/4 20:23
 **/

/**
 * 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。子数组 是数组中的一个连续部分。
 * https://leetcode.cn/problems/maximum-subarray/?envType=study-plan&id=shu-ju-jie-gou-ru-men&plan=data-structures&plan_progress=cw3y5li
 */
let maxSubArray = nums => {
    let length = nums.length;
    let max = 0;
    /**
     * 思路：
     * 1个数组中元素求最大值
     * 2个相邻数组中元素求最大值
     * 3个相邻数组中元素求最大值
     * ...
     * length个相邻数组中元素求最大值(即数组元素相加)
     *
     * 外部循环length次
     *
     */
    for (let i = 0; i < length; i++) {
        for(let j = 0; j < length; j++){
            let max1 = nums[j];
            if(nums[j+1] > max1){
                max1 = nums[j+1]
            }
        }
        for(let j = 0; j < length -1 ; j++){
            let max2 = nums[j] + nums[j+1]
            if(nums[j+1] + nums[j+2]> max2){
                max2 = nums[j+1] + nums[j+2]
            }
        }
    }

}

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))