int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 0;
 VAR2 = VAR1;
 do
 {
 /* BAD */
 VAR3[10] = '';
 VAR2++;
 }
 while(VAR2 <= 10);
 return 0;
}
