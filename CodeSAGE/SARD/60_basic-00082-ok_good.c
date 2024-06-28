int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 do
 {
 VAR2[9] = '';
 if (VAR1 >= 9) break;
 }
 while(++VAR1);
 return 0;
}
