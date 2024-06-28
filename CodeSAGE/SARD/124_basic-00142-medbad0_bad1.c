int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 17 - (17 - 1);
 for(VAR3 = VAR1; ; VAR3 += VAR2)
 {
 if (VAR3 > 17) break;
 /* BAD */
 VAR4[17] = '';
 }
 return 0;
}
