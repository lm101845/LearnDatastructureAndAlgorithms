/**
 * @Author liming
 * @Date 2023/1/4 20:08
 **/

/**
 * 给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
 * https://leetcode.cn/problems/contains-duplicate/?envType=study-plan&id=shu-ju-jie-gou-ru-men&plan=data-structures&plan_progress=cw3y5li
 */
const containsDuplicate = nums=>{
    let length = nums.length;
    for(let i = 0; i < length; i++){
        for(let j = i + 1; j < length;j++){
            if(nums[i] - nums[j] === 0){
                return true;
            }
        }
    }
    return false;
}

console.log(containsDuplicate([1,2,3,3,4]))

