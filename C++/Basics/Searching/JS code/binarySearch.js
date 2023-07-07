function binarySearch(sortedArray, key) {
    let start = 0, end = sortedArray.length - 1;
    while (start <= end) {
        let mid = (start + end) / 2;
        if (key === sortedArray[mid]) {
            return mid;
        } else if(sortedArray[mid] > key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

let even = [2,4,12,18,23,45];
let key = prompt("Enter key to search:");