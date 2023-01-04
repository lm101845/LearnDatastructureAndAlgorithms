/**
 * @Author liming
 * @Date 2023/1/4 13:37
 **/

function twoSum(nums,target){
    let length = nums.length;
    for (let i = 0; i < length;i++){
        for(let j = 1; j < length; j++){
            if(nums[i] + nums[j] === target){
                return [i,j];
            }
        }
    }
}

console.log(twoSum([1,2,4],6))