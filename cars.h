#pragma once
#include <map>
#include <string>

std::map<std::string, const char*> CAR_MAP = {
	{ "Alfa Romeo Brera", "alfa_romeo" },
	{ "Aston Martin DB9", "aston_martin" },
	{ "Audi Le Mans quattro", "audi" },
	{ "BMW M3 GTR", "bmw" },
	{ "Chevrolet Camaro Concept", "chevrolet" },
	{ "Chevrolet Camaro SS", "chevrolet" },
	{ "Chevrolet Chevelle SS", "chevrolet" },
	{ "Chevrolet Corvette Z06", "chevrolet" },
	{ "Chrysler 300C Hemi SRT8", "chrysler" },
	{ "Cop Cruiser", "police" },
	{ "Cop SUV", "police" },
	{ "Dodge Challenger", "dodge_vintage" },
	{ "Dodge Challenger Concept", "dodge" },
	{ "Dodge Charger R/T", "dodge_vintage" },
	{ "Dodge Charger SRT8", "dodge" },
	{ "Dodge Viper SRT-10", "dodge" },
	{ "Dump Truck", "truck" },
	{ "Fire Truck", "firetruck" },
	{ "Ford GT", "ford" },
	{ "Ford Mustang GT", "ford" },
	{ "Infiniti G35", "infiniti" },
	{ "Jaguar XK", "jaguar" },
	{ "Koenigsegg CCX", "koenigsegg" },
	{ "Lamborghini Gallardo", "lamborghini" },
	{ "Lamborghini Murci�lago", "lamborghini" },
	{ "Lamborghini Murci�lago LP640", "lamborghini" },
	{ "Lexus IS300", "lexus" },
	{ "Lotus Elise", "lotus" },
	{ "Lotus Europa S", "lotus" },
	{ "Mazda RX-7", "mazda" },
	{ "Mazda RX-8", "mazda" },
	{ "Mazda3 MPS", "mazda" },
	{ "Mercedes-Benz CLK 5000", "mercedes" },
	{ "Mercedes-Benz SL65 AMG", "mercedes" },
	{ "Mercedes-Benz SLR McLaren", "mclaren" },
	{ "Mitsubishi Eclipse", "mitsubishi" },
	{ "Mitsubishi Eclipse GT", "mitsubishi" },
	{ "Mitsubishi Lancer", "mitsubishi" },
	{ "Nissan 240 SX", "nissan" },
	{ "Nissan 350Z", "nissan" },
	{ "Nissan Skyline GT-R R34", "nissan" },
	{ "Pagani Zonda F", "pagani" },
	{ "Plymouth Hemi Cuda", "plymouth" },
	{ "Plymouth Road Runner", "plymouth" },
	{ "Pontiac GTO", "pontiac" },
	{ "Porsche 911 GT3 RS", "porsche" },
	{ "Porsche 911 Turbo", "porsche" },
	{ "Porsche Carrera GT", "porsche" },
	{ "Porsche Cayman S", "porsche" },
	{ "Renault Clio V6", "renault" },
	{ "Shelby GT500", "shelby_vintage" },
	{ "Subaru Impreza WRX STi", "subaru" },
	{ "Toyota Corolla GTS", "toyota" },
	{ "Toyota MR2", "toyota" },
	{ "Toyota Supra", "toyota" },
	{ "Vauxhall Monaro VXR", "vauxhall" },
	{ "Volkswagen Golf R32", "volkswagen" }
};

std::map<int, const char*> CS_CAR_MAP = {
	{ 0x5D83EFCC, "Lexus IS300" },
	{ 0x237C3A75, "Plymouth Road Runner" },
	{ 0x67407C77, "Chevrolet Corvette Z06" },
	{ 0x6B79181D, "Mazda RX-8" },
	{ 0x5DB5E27D, "Mitsubishi Eclipse GT" },
	{ 0x384F36E1, "Nissan 350Z" },
	{ 0x0EA8653A, "Renault Clio V6" },
	{ 0x473CA60B, "Plymouth Hemi Cuda" },
	{ 0x63823A17, "Porsche 911 GT3 RS" },
	{ 0x1D0D78D7, "Chevrolet Camaro SS" },
	{ 0x1189E08C, "Mazda RX-7" },
	{ 0x10EA9EF8, "BMW M3 GTR" },
	{ 0x6042374F, "Aston Martin DB9" },
	{ 0x69D99C84, "Toyota MR2" },
	{ 0x45DE3784, "Lamborghini Murci�lago LP640" },
	{ 0x3D9127B7, "Mazda3 MPS" },
	{ 0x5CCB3B2A, "Dump Truck" },
	{ 0x4394ADB7, "Nissan Skyline GT-R R34" },
	{ 0x118E506E, "Dodge Charger SRT8" },
	{ 0x15D5A483, "Subaru Impreza WRX STi" },
	{ 0x0FD6C0C7, "Chevrolet Chevelle SS" },
	{ 0x2D30E436, "Alfa Romeo Brera" },
	{ 0x723647D2, "Lamborghini Gallardo" },
	{ 0x36D68C7F, "Shelby GT500" },
	{ 0x5DE25998, "Dodge Charger R/T" },
	{ 0x45281DEB, "Porsche Cayman S" },
	{ 0x75F5ADFE, "Mitsubishi Lancer" },
	{ 0x3B3FF82C, "Lotus Europa S" },
	{ 0x08B26441, "Toyota Supra" },
	{ 0x1AA3382B, "Chevrolet Corvette Z06" },
	{ 0x57D1896F, "Chrysler 300C Hemi SRT8" },
	{ 0x58FC96B9, "Ford Mustang GT" },
	{ 0x5CAEC3B2, "Mercedes-Benz SLR McLaren" },
	{ 0x5BBE875C, "Mitsubishi Eclipse" },
	{ 0x4F3A2698, "Mercedes-Benz SL65 AMG" },
	{ 0x4DFC5F4A, "Dodge Challenger Concept" },
	{ 0x1F3E6BB0, "Dodge Challenger Concept" },
	{ 0x35B63534, "Lamborghini Muci�lago" },
	{ 0x23385707, "Mitsubishi Lancer" },
	{ 0x533C3D97, "Shelby GT500" },
	{ 0x780568E2, "Jaguar XK" },
	{ 0x1B3530EA, "Dodge Viper SRT-10" },
	{ 0x0C16D5AB, "Nissan 240 SX" },
	{ 0x35DD6A00, "Chevrolet Camaro Concept" },
	{ 0x0D2406A1, "Koenigsegg CCX" },
};