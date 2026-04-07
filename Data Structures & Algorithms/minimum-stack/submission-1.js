class MinStack {
    constructor() {
        this.stack=[];
        this.min=[];
    }

    /**
     * @param {number} val
     * @return {void}
     */
    push(val) {
        this.stack.push(val);
        if(this.min.length===0||val<=this.min[this.min.length-1]){
            this.min.push(val);
        }
    }

    /**
     * @return {void}
     */
    pop() {
        if(this.stack.length==0){
            return;
        }
        let val =this.stack.pop();
        if(val===this.min[this.min.length-1]){
            this.min.pop();
        }
        return val;

    }

    /**
     * @return {number}
     */
    top() {
        if(this.stack.length===0) return;

        let val = this.stack[this.stack.length-1];

        return val;
    }

    /**
     * @return {number}
     */
    getMin() {
        return this.min[this.min.length-1]
    }
}
