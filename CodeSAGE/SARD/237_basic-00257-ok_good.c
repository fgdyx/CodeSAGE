int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 9 - (9 - 1);
 VAR3 = VAR1;
 do
 {
 VAR4[VAR3] = '';
 VAR3 += VAR2;
 if (VAR3 > 9) break;
 }
 while(1);
 return 0;
}
