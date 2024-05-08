bool BinarySearch(vector<int> arr, int elem)
{
    int s = 0, e = arr.size() - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] == elem)
        {
            return true;
        }
        else if (arr[mid] > elem)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return false;
}

int max(vector<int> arr)
{
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(vector<int> arr)
{
    int min = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

vector<int> bubbleSort(vector<int> arr)
{
    int i, j;
    for (i = 0; i < arr.size(); i++)
    {

        for (j = 0; j < arr.size() - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}
