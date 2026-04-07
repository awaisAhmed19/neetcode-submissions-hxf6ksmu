class Solution {
    /**
     * @param {number[]} temperatures
     * @return {number[]}
     */
    dailyTemperatures(temperatures) {
        let stack=[];
        let t=temperatures;
        let n=temperatures.length;
        let res=new Array(n).fill(0);

        for(let i=0;i<n;i++){
            while(stack.length>0 && t[i]>t[stack[stack.length-1]]){
                    let day=stack.pop();
                    res[day]=i-day;
                 
                }   
                stack.push(i);
        }
        return res

    }
}
