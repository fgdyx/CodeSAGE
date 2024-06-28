int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 9 - (9 - 1);
 VAR2 = 0;
 do
 {
 VAR3[VAR2] = '';
 VAR2 += VAR1;
 if (VAR2 > 9) break;
 }
 while(1);
 return 0;
}
