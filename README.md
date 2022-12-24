# Oscar Room Lighting
Creating automated lighting systems for Oscar's tiny room.
## Initial Intentions For This Project
### Potential Lighting Systems
* Automated color temperature changing with bed position
* Accent lighting turning on and off with bed position, over record player, maybe on top of shelf
* Def moving disco ball, but not necessarily with bed position 
  * Maybe using a remote that also has ir, 3d print clip under desk to hold it
* Spotlight for discoball for sure
## Equipment
* [LED Strip](https://www.amazon.com/dp/B08QMH7R3P?ref_=cm_sw_r_apin_dp_7SDHEE939AYBEMCTD07V)
* [Power supply](https://www.amazon.com/gp/product/B09WVYDT9C/ref=ox_sc_act_title_2?smid=ASLF48OKQAF1T&psc=1)
![3031F78A-7FFB-4379-83CF-4268CCC1E3A2_1_105_c](https://user-images.githubusercontent.com/64116042/209421315-233e9b65-20ef-4939-b213-753745332076.jpeg)
* [Buck Converter](https://www.amazon.com/gp/product/B09DGD6WCG/ref=ox_sc_act_title_3?smid=A25NZ3OT6I61PQ&psc=1)
![19DCB9F5-97B8-4033-BBBF-6DC2565F2D83_1_105_c](https://user-images.githubusercontent.com/64116042/209421318-e61029ef-841e-4b90-8956-2dd5a7b53793.jpeg)
* [Elegoo UNO R3 Starter Kit](https://www.amazon.com/gp/product/B01D8KOZF4/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
* [Power Socket Inlet & Rocker Switch](https://www.amazon.com/BIQU-Rocker-Switch-Socket-Module/dp/B07KS2TQ45/ref=sr_1_4?crid=2ETRY5RSOFFRG&keywords=inlet+power+plug+socket+with+switch&qid=1667399322&qu=eyJxc2MiOiIxLjc3IiwicXNhIjoiMC4wMCIsInFzcCI6IjAuMDAifQ%3D%3D&sprefix=inlet+power+plug+socket+with+switch%2Caps%2C86&sr=8-4)
* [Mosfets](https://www.amazon.com/WeiMeet-RFP30N06LE-N-Channel-Mosfet-Arduino/dp/B07CTF1JVD/ref=sr_1_3?crid=E83LLQTW0UMJ&keywords=mosfet&qid=1667399900&qu=eyJxc2MiOiI0Ljg2IiwicXNhIjoiNC43MyIsInFzcCI6IjQuNTEifQ%3D%3D&sprefix=mosfet%2Caps%2C96&sr=8-3)
* [Perf-Boards](https://www.amazon.com/gp/product/B072Z7Y19F/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
## Desired Functionality
![61D5AE1D-83F6-42F5-A0EA-E30FB895AF02_1_105_c](https://user-images.githubusercontent.com/64116042/209421287-15f3e43e-c78f-4185-a409-83492bc11456.jpeg)
![877635A1-41D2-4F78-A3AD-B631730C1A09_1_105_c](https://user-images.githubusercontent.com/64116042/209421298-774c431e-b677-4211-bf12-a7a04d07d318.jpeg)
## Wiring and Circuitry
### Planning
![E51A6E71-F9F4-4A7D-9B57-417B64AE796E_1_102_o](https://user-images.githubusercontent.com/64116042/199527218-202d442d-821e-4282-be0b-c5bb5446fa5f.jpeg)
### Initial Wiring Iteration
![E91DAA34-1EEB-4A76-80DA-6EDB2877547D_1_105_c](https://user-images.githubusercontent.com/64116042/199527700-08e2eb59-fd91-43de-bdf9-162f893c1ae6.jpeg)
![BF963B32-FA14-4599-B3BE-F6E10E0AC575_1_105_c](https://user-images.githubusercontent.com/64116042/199527733-2767686c-4654-4776-ab05-0c400749a6c6.jpeg)
![A393EB1E-40A3-4439-A2D0-86AC3427F0A4_1_105_c](https://user-images.githubusercontent.com/64116042/199527755-03631f70-262c-4446-90b2-05fc6be99d16.jpeg)
![897B7180-B524-4BFA-9032-AEF7913988E0_1_105_c](https://user-images.githubusercontent.com/64116042/199527781-23d0c404-453d-4fe4-93c7-7dd95779c3ae.jpeg)
![8D03028A-29B5-49E9-80A5-4718C6CF95E9_1_105_c](https://user-images.githubusercontent.com/64116042/199527795-fa23f391-fa1b-4ee7-9672-49d179187784.jpeg)
![499CE922-B596-407B-B2DD-C6EA9E119C1A_1_105_c](https://user-images.githubusercontent.com/64116042/199527821-72d3f275-8bad-48a0-9c4b-cd9ad59ca02c.jpeg)
![3B6E46F6-E1DA-4373-BF09-D398DCC53BD0_1_105_c](https://user-images.githubusercontent.com/64116042/209421259-334ebdea-6261-42c9-8b99-da42914cec07.jpeg)
### Second Wiring Iteration
![1E21E679-63CB-47CE-9485-2DD4BED24D31_1_105_c](https://user-images.githubusercontent.com/64116042/209421270-0e21465d-1d24-43af-8810-bddb36abde3f.jpeg)
![78F33B3D-46C5-411F-B4C2-7493EBF038A0_1_105_c](https://user-images.githubusercontent.com/64116042/209421282-e989a3f6-dc99-4af2-a753-8a5c7cea9197.jpeg)
![7ED515A3-D541-44A6-AD88-23239FCC88E4_1_105_c](https://user-images.githubusercontent.com/64116042/209421322-f8c7e1be-9a63-4af1-987b-3ff86f2842ee.jpeg)
### Third Wiring Iteration
![FA38B3FB-8B2F-43B4-8571-F833BB82424E_1_105_c](https://user-images.githubusercontent.com/64116042/209421328-dcf57a9c-2f58-4aec-85f3-f9d189bfcef0.jpeg)
![E55C3C43-3F84-4F50-A6FD-DDF0E53318F6_1_105_c](https://user-images.githubusercontent.com/64116042/209421333-cf006e9a-d9d0-4892-a02b-46ffd255d129.jpeg)
![DAE90F8F-FEB8-47BF-8B25-7BD479A4C364_1_105_c](https://user-images.githubusercontent.com/64116042/209421342-c3a56965-ce8b-4086-9009-3ff2bbc7d894.jpeg)
![4076AE2B-6B4B-4629-BD51-81EA9C2DA21D_1_105_c](https://user-images.githubusercontent.com/64116042/209421486-a6ab1104-2034-45b0-ae82-3997bd365588.jpeg)
![1229F545-7DAB-4582-BE7D-204C52DB987C_1_105_c](https://user-images.githubusercontent.com/64116042/209421487-86d7f518-500b-4c12-ae0a-1d003e80675d.jpeg)
![B0D9A9CC-A083-411F-99D9-BACE31BCEAE0_1_105_c](https://user-images.githubusercontent.com/64116042/209421488-e16dab09-20cc-44a0-bf27-3cfdb27037ea.jpeg)
![F56D08D8-673F-4268-AFB3-1D5B362828DD_1_105_c](https://user-images.githubusercontent.com/64116042/209421490-331a55e5-a778-46e1-980d-ca94f70a3863.jpeg)
### Fourth Wiring Iteration
![45B6C4AA-CD81-477E-931C-437DC147F999_1_105_c](https://user-images.githubusercontent.com/64116042/209421494-4333f50d-dc3f-4ca0-8f60-cb16e0a7f5f1.jpeg)
![24057974-F374-42D6-B36A-0B8D630EA675_1_105_c](https://user-images.githubusercontent.com/64116042/209421497-7c9553f7-e66c-4cf8-9816-970459a7ddb7.jpeg)
![BC0FC9D8-72A5-4E5E-925D-6FC91622D489_1_105_c](https://user-images.githubusercontent.com/64116042/209421499-2f4bd39f-5331-4c92-9a8d-c360b13ee5cd.jpeg)
![227BF10B-BAB2-4FF9-ACD7-8AFC7C16F702_1_105_c](https://user-images.githubusercontent.com/64116042/209421503-bc03adde-ba38-43c4-b840-7d062f35bebe.jpeg)
![AA37E4AD-664A-49DB-AC86-5875CA37EAF4_1_105_c](https://user-images.githubusercontent.com/64116042/209421506-18ea2b98-4341-4718-bea8-628592a0a103.jpeg)
![1C5B634A-7BC2-4764-A0B0-971252505B19_1_105_c](https://user-images.githubusercontent.com/64116042/209421507-0e2beeed-85f7-45c0-ad70-f7f6253a7919.jpeg)
![67347734-450F-4561-9AEE-FE29ACDA9A18_1_105_c](https://user-images.githubusercontent.com/64116042/209421508-22249808-b643-4de2-b826-388f1cecd9bd.jpeg)
![32F68A6C-4ED6-45A6-854A-60B13E928C11_1_105_c](https://user-images.githubusercontent.com/64116042/209421510-d8fc7ecc-7b10-4f61-ba54-17ae7e80b16f.jpeg)
![2C781729-5E62-4AF7-9600-E5FDF9E9F7CF_1_105_c](https://user-images.githubusercontent.com/64116042/209421513-c2a6fd2c-5ba8-44db-9ba8-7ef3b108b787.jpeg)
![A9B6C413-1812-4A69-A41D-CE710EB46FFD_1_105_c](https://user-images.githubusercontent.com/64116042/209421516-c2e07a45-730e-48e1-b7ea-25d53f239587.jpeg)
![D32A8912-5C75-4767-A6A5-8718A4AC4094_1_105_c](https://user-images.githubusercontent.com/64116042/209421518-ad858f0e-82d4-4464-902c-3d3dabdfe639.jpeg)
![8526E989-E239-4E1A-BC6E-FF9A45B31A52_1_105_c](https://user-images.githubusercontent.com/64116042/209421521-d612abca-cc4f-45dd-9c72-9acff1e4af08.jpeg)
## Case
![CC5AF9F1-9D25-4112-8FC8-2D4EF057D3A7_1_105_c](https://user-images.githubusercontent.com/64116042/209421324-654dfaf8-9e12-4485-82c6-104063896f71.jpeg)

