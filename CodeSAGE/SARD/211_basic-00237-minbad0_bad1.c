int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 10;
 VAR3 = VAR1;
 do
 {
 /* BAD */
 VAR4[VAR3] = '';
 VAR3++;
 }
 while(VAR3 <= VAR2);
 return 0;
}
