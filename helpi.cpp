int lack = 0;
int bal = 0;
int start = 0;

for (int i = 0; i < n; i++)
{
    bal += p[i].petrol - p[i].distance;
    if (bal < 0)
    {
        lack += bal;
        start = i + 1;
        bal = 0;
    }
}
    if (lack + bal >= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
