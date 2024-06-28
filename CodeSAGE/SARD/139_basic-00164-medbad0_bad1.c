int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 int VAR4;
 char VAR5[10];
 VAR1 = 0;
 VAR2 = 17;
 VAR3 = 17 - (17 - 1);
 for(VAR4 = VAR1; VAR4 <= VAR2; VAR4 += VAR3)
 {
 /* BAD */
 VAR5[17] = '';
 }
 return 0;
}
