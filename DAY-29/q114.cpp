//program to create menu driven array operations system


#include <iostream>
using namespace std;
int main(){
    cout<<"--------ARRAY OPERATIONS SYSTEM--------\n";
    cout<<"1. display array\n";
    cout<<"2. search an element\n";
    cout<<"3. find maximum element\n";
    cout<<"4. find minimum element\n";
    cout<<"5. calculate sum of elements\n";
    cout<<"6. calculate average of elements\n";
    cout<<"7. exit\n";
    int n;
    cout<<"enter number of elements of array:";
    cin>>n;
    int array[n], i;
    for(i=0; i<n; i++){
        cout<<"enter array["<<i<<"]=";
        cin>>array[i];
    }
    int choice, key=-1, avg= 0, sum2=0;
    int element, max= array[0], min= array[0], sum= 0;
    do
    {
        cout<<"enter choice(1-7):";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"the array is:\n";
            for(i=0; i<n; i++){
                cout<<array[i]<<" ";
            }
            cout<<endl;
            break;
        
        case 2:
            cout<<"enter element to be searched:";
            cin>>element;
            for(i=0; i<n; i++){
                if(array[i]== element){
                    key= i;
                    break;
                }
            }   
            if (key != -1){
                cout<<"the element "<<element<<" is found at "<<key+1<<"th position"<<endl;
                break;
            }
            else{
                cout<<"element is not found"<<endl;
                break;
            }
            
        case 3:
            for(i=0; i<n; i++){
                if(array[i]>max){
                    max= array[i];
                }
            }
            cout<<"the maximum element is "<<max<<endl;
            break;

        case 4:
            for(i=0; i<n; i++){
                if(array[i]<min){
                    min= array[i];
                }
            }
            cout<<"the minimum element is "<<min<<endl;
            break;

        case 5:
            for(i=0; i<n; i++){
                sum+= array[i];
            }
            cout<<"the desried sum is "<<sum<<endl;
            break;

        case 6:
            for(i=0; i<n; i++){
                sum2+= array[i];
            }
            cout<<"sum is "<<sum2<<endl;
            avg= sum2/n;
            cout<<"the desried average is "<<avg<<endl;
            break;

        case 7:
            cout<<"the loop is ended"<<endl;
            break;

        default:
            cout<<"invalid option is selected"<<endl;
            break;
        }
    } while (choice != 7);
    return 0;
}