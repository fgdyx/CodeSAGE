int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 do
 {
 VAR2[VAR1] = '';
 VAR1++;
 if (VAR1 > 9) break;
 }
 while(1);
 return 0;
}
