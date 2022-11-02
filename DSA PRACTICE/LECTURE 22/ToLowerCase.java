// PROGRAM 03: Upper to Lower case 'S'='s'

class ToLowerCase
{
    public static void main(String[] args) 
    {
       System.out.print("Character b: "+toLowerCase('b')); 
       System.out.print("Character B: "+toLowerCase('b')); 
    }

    public static char toLowerCase(char ch)
    {
        int temp=0;
        if(ch>='a' && ch<='z')
        {
            return ch;
        }
        else if(ch>='A' && ch<='Z')
        {
            temp=((int)ch )- 'A'+'a';
        }
       return (char)temp; 
    }
}

/*
Character b: b
Character B: b
*/


/*Lower to Upper
public static char toUpperCase(char ch)
    {
        int temp=0;
        if(ch>='A' && ch<='Z')
        {
            return ch;
        }
        else if(ch>='a' && ch<='z')
        {
            temp=((int)ch )- 'a'+'A';
        }
       return (char)temp; 
    }
*/