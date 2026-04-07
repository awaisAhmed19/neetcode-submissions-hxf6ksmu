class Solution {
    /**
     * @param {string[]} tokens
     * @return {number}
     */
    evalRPN(tokens) {
        let op1,op2;
        let i=0;
        let stack=[];
        while(i<tokens.length){
            if (!isNaN(Number(tokens[i]))) {
                stack.push(Number(tokens[i]));
            }

            switch(tokens[i]){
                case "+": op1=stack.pop();
                    op2=stack.pop();
                    stack.push(op1+op2);
                    break;
                case "-": op1=stack.pop();
                    op2=stack.pop();
                    stack.push(op2-op1);
                    break;
                case "*": op1=stack.pop();
                    op2=stack.pop();
                    stack.push(op1*op2);
                    break;
                case "/": op1=stack.pop();
                    op2=stack.pop();
                    stack.push(Math.trunc(op2/op1));
                    break;
                default: 
                    break;
            }
            i++;
        }
        return stack[0];
    }
}
