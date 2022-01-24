const arr=[1,4,23,1,12,121,21,212,131,3,131,13,1,3,4,2342,34,12,4,14,2,1,2,312,3]
 function bubbleSort(arr)
 {
     for(let i=0;i<arr.length;i++){
         for (let j=0;j<arr.length;j++){
            if(arr[j]>arr[j+1]){
                let temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

         }

     }
 }
bubbleSort(arr)
 console.log(arr)