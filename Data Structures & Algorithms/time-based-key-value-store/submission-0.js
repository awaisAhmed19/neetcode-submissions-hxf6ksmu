class TimeMap {
    constructor() {
        this.keyStore = new Map();
    }

    /**
     * @param {string} key
     * @param {string} value
     * @param {number} timestamp
     * @return {void}
     */
    set(key, value, timestamp) {
        if(!this.keyStore.has(key)){
            this.keyStore.set(key,[]);
        }
        this.keyStore.get(key).push([value,timestamp]);
    }

    /**
     * @param {string} key
     * @param {number} timestamp
     * @return {string}
     */
    get(key, timestamp) {
        if(!this.keyStore.has(key)) return "";
        let arr=this.keyStore.get(key);
        let low=0;
        let high=arr.length-1;
        let res="";
        while(low<=high){
            let mid=Math.floor((high+low)/2);
            let val=arr[mid][1]
            if(val<=timestamp){
                res=arr[mid][0];
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return res;
    }
}
