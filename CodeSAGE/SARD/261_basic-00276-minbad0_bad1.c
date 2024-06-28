int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 int VAR4;
 char VAR5[10];
 VAR1 = 0;
 VAR2 = 10;
 VAR3 = 10 - (10 - 1);
 VAR4 = VAR1;
 do
 {
 /* BAD */
 VAR5[VAR4] = '';
 VAR4 += VAR3;
 }
 while(VAR4 <= VAR2);
 return 0;
}
