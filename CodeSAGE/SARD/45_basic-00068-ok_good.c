int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = (sizeof VAR2 > 9 + 1) ? 0 : 9;
 VAR2[VAR1] = '';
 return 0;
}
