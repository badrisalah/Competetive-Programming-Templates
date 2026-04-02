 
int binarysearch(vector<int> &v, int target)
{
	int l = 1, r = v.size()-1;
        while(l + 1 < r)
        {
            int mid = l + (r-l)/2;
            if(v[r]> target)
                r = mid;
            else
                l = mid+1;
        }
        if (v[l] == target)
            return (l);
        return (r);
}
