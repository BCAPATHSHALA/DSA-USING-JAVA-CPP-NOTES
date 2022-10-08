//Find duplicate element from an array(Code Studio)
    public static int findDuplicate(ArrayList<Integer> arr) 
    {

        int ans=0;
        for(int i=0; i<arr.size();i++)
        {
            ans=ans^arr.get(i);
        }
        for(int i=1; i<arr.size();i++)
        {
            ans=ans^i;
        }
        
        return ans;
    }
