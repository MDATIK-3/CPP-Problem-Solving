void MUKU()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    ll decimal = 0;
    int p = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            decimal += pow(2, p);
        }
        p++;
    }
    cout << decimal << endl;
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
