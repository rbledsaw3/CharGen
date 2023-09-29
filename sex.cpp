#include "sex.h"
#include "roll.h"


Sex::Sex(const std::string& name, const std::string& gender, const Stats& bonuses) :
    name(name),
    gender(gender),
    bonuses(bonuses) {}

const std::string &Sex::getName() const {
    return name;
}

const std::string &Sex::getGender() const {
    return gender;
}

const Stats& Sex:: getBonuses() const {
    return bonuses;
}

const std::vector<std::string>& Sex::getFemaleNames() {
    static const std::vector<std::string> femaleNames = {
        "Aasta",
        "Acadia",
        "Ada",
        "Adelaide",
        "Adelot",
        "Adeva",
        "Adina",
        "Afra",
        "Aibell",
        "Aidin",
        "Aige",
        "Ailbe",
        "Aileen",
        "Aille",
        "Aimee",
        "Aina",
        "Aine",
        "Aithne",
        "Alaine",
        "Alastrina",
        "Alberta",
        "Alda",
        "Alena",
        "Alfdis",
        "Alfreda",
        "Alfrida",
        "Aline",
        "Alison",
        "Allene",
        "Almas",
        "Almira",
        "Alvina",
        "Amalina",
        "Amelia",
        "Amina",
        "Anatolia",
        "Andri",
        "Anika",
        "Annora",
        "Anu",
        "Arabella",
        "Arax",
        "Arbha",
        "Areta",
        "Arina",
        "Arita",
        "Arla",
        "Arlean",
        "Arnbella",
        "Arnthora",
        "Arvida",
        "Astra",
        "Astrid",
        "Astrild",
        "Aud",
        "Audrey",
        "Aurora",
        "Avon",
        "Avril",
        "Ayame",
        "Azelie",
        "Banba",
        "Beara",
        "Bebhionn",
        "Becuma",
        "Belita",
        "Belle",
        "Belva",
        "Berita",
        "Berna",
        "Berta",
        "Beryl",
        "Birgit",
        "Blenda",
        "Boann",
        "Breg",
        "Bri",
        "Bridget",
        "Brinna",
        "Brita",
        "Britannia",
        "Bruna",
        "Brunhild",
        "Byrna",
        "Carelia",
        "Carina",
        "Cathlin",
        "Cebha",
        "Celestine",
        "Cerband",
        "Cesair",
        "Charlene",
        "Chloe",
        "Clarinda",
        "Cliodhna",
        "Clothra",
        "Cöla",
        "Cora",
        "Coral",
        "Corra",
        "Credhe",
        "Creidne",
        "Cyrilla",
        "Dagmar",
        "Dagni",
        "Dagny",
        "Daireann",
        "Davnet",
        "Dawn",
        "Dextera",
        "Deirdre",
        "Dervilia",
        "Devra",
        "Dindrane",
        "Dionetta",
        "Domnu",
        "Dorea",
        "Drusilla",
        "Duana",
        "Durfulla",
        "Ebba",
        "Ebhla",
        "Ebliu",
        "Edda",
        "Edeva",
        "Edina",
        "Edla",
        "Edrie",
        "Edwina",
        "Ëvin",
        "Eibhir",
        "Eirinn",
        "Eithne",
        "Elaine",
        "Electa",
        "Elfrida",
        "Elfride",
        "Elfrieda",
        "Elinor",
        "Elizabetta",
        "Ella",
        "Ellin",
        "Elmira",
        "Eloisa",
        "Elsa",
        "Elsbeth",
        "Elspeth",
        "Elva",
        "Elvina",
        "Emer",
        "Emma",
        "Endrede",
        "Eri",
        "Erika",
        "Erna",
        "Ernata",
        "Eslin",
        "Estrella",
        "Etelka",
        "Ethelburga",
        "Ethelreda",
        "Eulala",
        "Evadne",
        "Evaine",
        "Evelina",
        "Evelyn",
        "Evolyn",
        "Fanchon",
        "Fand",
        "Fawn",
        "Fea",
        "Fenella",
        "Ferminia",
        "Fial",
        "Findbec",
        "Fingalla",
        "Fingel",
        "Fiona",
        "Francisco",
        "Freda",
        "Frederica",
        "Freya",
        "Frida",
        "Gabriela",
        "Gäl",
        "Gale",
        "Garmuin",
        "Genevieve",
        "Gertrude",
        "Gilberta",
        "Gilda",
        "Gilian",
        "Ginerva",
        "Giolla",
        "Gladiola",
        "Gladys",
        "Gleda",
        "Glida",
        "Gotelind",
        "Graine",
        "Grainne",
        "Grania",
        "Grazia",
        "Grian",
        "Grima",
        "Guida",
        "Gunila",
        "Gwen",
        "Gwenda",
        "Gwendolyn",
        "Gwyneth",
        "Gwynfryd",
        "Halima",
        "Halina",
        "Halla",
        "Halley",
        "Haninah",
        "Hansine",
        "Heather",
        "Hedda",
        "Hedwig",
        "Helche",
        "Helga",
        "Helma",
        "Helmi",
        "Herdis",
        "Herma",
        "Herrat",
        "Hertha",
        "Hilda",
        "Hildegarde",
        "Hortensia",
        "Hrefna",
        "Hulda",
        "Iana",
        "Ida",
        "Iduna",
        "Igraine",
        "Ingeborg",
        "Ingrid",
        "Ingunn",
        "Iola",
        "Iona",
        "Ione",
        "Irina",
        "Irnan",
        "Isidora",
        "Isolde",
        "Isolt",
        "Ivy",
        "Janna",
        "Jennifer",
        "Jensine",
        "Jillian",
        "Jocelyn",
        "Jorunn",
        "Jovena",
        "Juno",
        "Karelia",
        "Karine",
        "Karitsa",
        "Katerina",
        "Katrina",
        "Keavy",
        "Kelin",
        "Kenin",
        "Keven",
        "Kristen",
        "Kristina",
        "Leila",
        "Leonarda",
        "Leta",
        "Liadin",
        "Liana",
        "Liena",
        "Lilly",
        "Lina",
        "Linnea",
        "Livia",
        "Llyn",
        "Lölla",
        "Lola",
        "Loren",
        "Lotta",
        "Louisa",
        "Lucia",
        "Lucinda",
        "Ludmila",
        "Lülla",
        "Luna",
        "Lydia",
        "Lynn",
        "Lyones",
        "Lyris",
        "Macha",
        "Madelon",
        "Mäve",
        "Mafka",
        "Maga",
        "Magda",
        "Magna",
        "Maia",
        "Maira",
        "Malvina",
        "Mana",
        "Manon",
        "Margery",
        "Marta",
        "Mathilda",
        "Mathilde",
        "Maura",
        "Mavis",
        "Maya",
        "Melba",
        "Melkorka",
        "Melva",
        "Mennefer",
        "Meredith",
        "Meri",
        "Meta",
        "Mignon",
        "Mila",
        "Milada",
        "Mina",
        "Minelle",
        "Minna",
        "Mira",
        "Miryam",
        "Moina",
        "Moira",
        "Mona",
        "Mora",
        "Morgana",
        "Moriath",
        "Morna",
        "Morrigan",
        "Murna",
        "Myna",
        "Myra",
        "Myrna",
        "Myrrha",
        "Naas",
        "Nada",
        "Nadia",
        "Natalia",
        "Nathalia",
        "Nathalie",
        "Nedda",
        "Nemain",
        "Nerbha",
        "Nessa",
        "Nesta",
        "Neva",
        "Neysa",
        "Neza",
        "Niamh",
        "Nila",
        "Nita",
        "Nöla",
        "Nona",
        "Nordri",
        "Noreen",
        "Norine",
        "Norma",
        "Nova",
        "Novita",
        "Novomira",
        "Nuala",
        "Nunila",
        "Oda",
        "Odile",
        "Odilia",
        "Olga",
        "Oona",
        "Orah",
        "Oriana",
        "Orlata",
        "Orsola",
        "Osa",
        "Osk",
        "Othilia",
        "Ottilia",
        "Palma",
        "Pasca",
        "Petra",
        "Petrea",
        "Petronella",
        "Provida",
        "Rae",
        "Ragna",
        "Romana",
        "Ronja",
        "Reina",
        "Renata",
        "Reva",
        "Rhona",
        "Rhonda",
        "Roshena",
        "Rowena",
        "Rufina",
        "Runa",
        "Sabd",
        "Samhair",
        "Sceanb",
        "Scena",
        "Seang",
        "Selema",
        "Selena",
        "Selene",
        "Selina",
        "Shamira",
        "Sharada",
        "Sarman",
        "Sibyl",
        "Sieglind",
        "Sigfrid",
        "Signe",
        "Sigrid",
        "Silma",
        "Silia",
        "Sionan",
        "Siranush",
        "Slania",
        "Smirgat",
        "Solevig",
        "Stasha",
        "Svea",
        "Tacey",
        "Tadia",
        "Tailtu",
        "Tamara",
        "Tarina",
        "Tea",
        "Tekla",
        "Teruah",
        "Tesse",
        "Thalia",
        "Thalna",
        "Thecla",
        "Theda",
        "Theodosia",
        "Thora",
        "Thorfinna",
        "Thorunn",
        "Thylda",
        "Thyra",
        "Thyrza",
        "Titania",
        "Trin",
        "Triona",
        "Tuage",
        "Uathach",
        "Ula",
        "Ulrica",
        "Una",
        "Undine",
        "Unelma",
        "Uote",
        "Urania",
        "Ursula",
        "Uta",
        "Valborg",
        "Valda",
        "Valentia",
        "Valerie",
        "Valeska",
        "Valisa",
        "Varda",
        "Varina",
        "Veda",
        "Verna",
        "Vesta",
        "Veva",
        "Vevina",
        "Vicentia",
        "Vida",
        "Vieno",
        "Viera",
        "Vigdis",
        "Vilma",
        "Vinatta",
        "Viveka",
        "Walda",
        "Wertha",
        "Wilhelmina",
        "Willa",
        "Winfrey",
        "Wynne",
        "Xenia",
        "Yana",
        "Yerusha",
        "Ysolde",
        "Yvette",
        "Yvonne",
        "Zahra",
        "Zandra",
        "Zara",
        "Zarifa",
        "Zenda",
        "Zelie",
        "Zena",
        "Zenia",
        "Zephyra",
        "Zerlina",
        "Zeta",
        "Zilla",
        "Ziona",
        "Zita",
        "Zoe",
        "Zona",
        "Zora"
    };
    return femaleNames;
}

const std::vector<std::string>& Sex::getMaleNames() {
    static const std::vector<std::string> maleNames = {
        "Aaby",
        "Aage",
        "Aanon",
        "Aarlen",
        "Aart",
        "Achim",
        "Adair",
        "Adalbert",
        "Adelsteen",
        "Adger",
        "Adin",
        "Adolf",
        "Adoniram",
        "Adriaan",
        "Agathon",
        "Agenor",
        "Agidius",
        "Aiden",
        "Aiker",
        "Aikman",
        "Aimo",
        "Aino",
        "Aitken",
        "Aksel",
        "Aladar",
        "Alain",
        "Alan",
        "Alanson",
        "Alaric",
        "Alastair",
        "Alberich",
        "Albert",
        "Albin",
        "Albion",
        "Albrecht",
        "Alcan",
        "Aldegond",
        "Alden",
        "Aldert",
        "Aldis",
        "Aldhelm",
        "Aldred",
        "Aldrich",
        "Aldridge",
        "Aldro",
        "Aldwerth",
        "Aldwin",
        "Alec",
        "Alers",
        "Ales",
        "Alf",
        "Alfons",
        "Alford",
        "Alfred",
        "Algernon",
        "Alister",
        "Allard",
        "Allart",
        "Alisbone",
        "Alliston",
        "Allson",
        "Allvar",
        "Allyn",
        "Almer",
        "Almeric",
        "Almroth",
        "Almu",
        "Aloysius",
        "Alpheus",
        "Alphons",
        "Alsop",
        "Alton",
        "Alured",
        "Alvan",
        "Alvey",
        "Alvored",
        "Alvred",
        "Alwyn",
        "Amadis",
        "Ames",
        "Amschel",
        "Anatol",
        "Andrus",
        "Aneurin",
        "Angus",
        "Ansel",
        "Anselm",
        "Anson",
        "Antal",
        "Anthelme",
        "Anton",
        "Antony",
        "Antrim",
        "Anthrop",
        "Archibald",
        "Ardal",
        "Arder",
        "Aretas",
        "Ariad",
        "Arian",
        "Arkwright",
        "Arlo",
        "Armand",
        "Armar",
        "Armin",
        "Armistead",
        "Armitage",
        "Armo",
        "Arndt",
        "Arnesen",
        "Arnfinn",
        "Arni",
        "Arno",
        "Arnold",
        "Arnot",
        "Arnulf",
        "Arnvid",
        "Aron",
        "Apad",
        "Arthol",
        "Arthur",
        "Artur",
        "Arvid",
        "Arving",
        "Arvo",
        "Asaf",
        "Asgard",
        "Asger",
        "Ashburton",
        "Ashdown",
        "Ashur",
        "Askew",
        "Astolphe",
        "Athol",
        "Atul",
        "Aubrey",
        "Aulius",
        "August",
        "Axel",
        "Aylmer",
        "Bagot",
        "Baird",
        "Bal",
        "Baldor",
        "Balduin",
        "Baldur",
        "Balfour",
        "Baldwin",
        "Baliol",
        "Ballard",
        "Balthasard",
        "Bardach",
        "Bardwell",
        "Barend",
        "Barent",
        "Baring",
        "Barlow",
        "Barnas",
        "Barret",
        "Barron",
        "Barry",
        "Barstow",
        "Barthel",
        "Bartle",
        "Barton",
        "Bayard",
        "Bearns",
        "Beck",
        "Bede",
        "Beorn",
        "Bengt",
        "Benoist",
        "Bercan",
        "Bergen",
        "Bern",
        "Bernhart",
        "Bernt",
        "Bertil",
        "Bertram",
        "Bertran",
        "Bebil",
        "Beylard",
        "Bhimrao",
        "Bhoskar",
        "Bhupindar",
        "Bidwell",
        "Bindon",
        "Bion",
        "Bipin",
        "Birath",
        "Birbeck",
        "Birchard",
        "Birger",
        "Birket",
        "Bjarni",
        "Bjorn",
        "Bjornstern",
        "Blackwood",
        "Blaine",
        "Blair",
        "Blasco",
        "Bledsoe",
        "Blount",
        "Bo",
        "Bodil",
        "Boner",
        "Booker",
        "Booth",
        "Boott",
        "Borlace",
        "Botho",
        "Bourke",
        "Bowie",
        "Boyd",
        "Brace",
        "Bracken",
        "Branwell",
        "Brent",
        "Brion",
        "Brockden",
        "Brodhead",
        "Brodribb",
        "Bronwyn",
        "Bror",
        "Broun",
        "Bruno",
        "Burkard",
        "Byam",
        "Byrne",
        "Bure",
        "Bysshe",
        "Cabel",
        "Cadmar",
        "Cadwallader",
        "Cairn",
        "Calbraith",
        "Calder",
        "Cale",
        "Callcott",
        "Calvert",
        "Carey",
        "Carless",
        "Carlyle",
        "Caron",
        "Carsten",
        "Carvell",
        "Caryl",
        "Cashin",
        "Cathal",
        "Chalfant",
        "Chard",
        "Chauncey",
        "Chichester",
        "Chittenden",
        "Chlodwig",
        "Chrowder",
        "Clafin",
        "Cleghorn",
        "Clerihew",
        "Clinch",
        "Clipster",
        "Clopton",
        "Clovie",
        "Cnud",
        "Cnut",
        "Coalter",
        "Coel",
        "Colden",
        "Colgan",
        "Colin",
        "Colon",
        "Cotton",
        "Colwyn",
        "Conall",
        "Conan",
        "Congal",
        "Conlan",
        "Connop",
        "Conor",
        "Conrad",
        "Conwy",
        "Cormac",
        "Corrowr",
        "Corry",
        "Corwin",
        "Cowan",
        "Cowden",
        "Cowper",
        "Craigh",
        "Cronyn",
        "Croyble",
        "Crundall",
        "Culkin",
        "Cullen",
        "Cullross",
        "Cuthbert",
        "Cylarus",
        "Cyriel",
        "Cyrillus",
        "Cyryl",
        "Dagomar",
        "Damian",
        "Damon",
        "Dana",
        "Danforth",
        "Darrell",
        "Daron",
        "Darvin",
        "Dashiell",
        "Dashwood",
        "Dayyan",
        "Delevan",
        "Demarest",
        "Denham",
        "Denton",
        "Denzil",
        "Derval",
        "Dextar",
        "Diderik",
        "Diehl",
        "Dighton",
        "Dillon",
        "Dinham",
        "Dirk",
        "Doak",
        "Domhnall",
        "Donagh",
        "Donal",
        "Dongal",
        "Doniol",
        "Doral",
        "Dorn",
        "Dorr",
        "Doud",
        "Dougal",
        "Doust",
        "Dragan",
        "Dragutin",
        "Dred",
        "Drexel",
        "Duald",
        "Dür",
        "Dugal",
        "Dugald",
        "Dugdale",
        "Dunbar",
        "Dundas",
        "Dunglas",
        "Dunstan",
        "Dunwody",
        "Dunward",
        "Dwarkanath",
        "Dywer",
        "Dyce",
        "Dyer",
        "Dyke",
        "Dylan",
        "Dyneley",
        "Eadweard",
        "Eager",
        "Eamon",
        "Eanger",
        "Eardley",
        "Earle",
        "Earnest",
        "Eastman",
        "Eberhard",
        "Eckert",
        "Eckhard",
        "Ector",
        "Edgar",
        "Edmond",
        "Edmondstone",
        "Edric",
        "Edson",
        "Eduard",
        "Edwyn",
        "Efrem",
        "Egan",
        "Egbert",
        "Egerton",
        "Egon",
        "Egron",
        "Ehrman",
        "Eilhard",
        "Eilif",
        "Einar",
        "Eivind",
        "Elbert",
        "Eldon",
        "Eldred",
        "Eldric",
        "Eleazar",
        "Elford",
        "Elhana",
        "Eliakim",
        "Elinor",
        "Ellingwood",
        "Ellwood",
        "Elrad",
        "Elsdon",
        "Elswyth",
        "Elton",
        "Elvin",
        "Elwell",
        "Emory",
        "Endicott",
        "Endrede",
        "Endsor",
        "Engelhard",
        "Erard",
        "Ercan",
        "Erdmann",
        "Eric",
        "Erland",
        "Erle",
        "Ernald",
        "Ernan",
        "Ervin",
        "Esmond",
        "Ethelbert",
        "Ethelred",
        "Eudo",
        "Evald",
        "Evan",
        "Evarts",
        "Everard",
        "Evert",
        "Evind",
        "Ewald",
        "Ewen",
        "Eyulf",
        "Eyvind",
        "Faber",
        "Fahs",
        "Fairfax",
        "Fairman",
        "Falcon",
        "Falkiner",
        "Fanshaw",
        "Faraday",
        "Farquhar",
        "Farwell",
        "Feargus",
        "Fedor",
        "Feike",
        "Felam",
        "Fellow",
        "Fenwick",
        "Ferdinand",
        "Fergus",
        "Fernand",
        "Feustmann",
        "Fielding",
        "Finbar",
        "Findley",
        "Finegan",
        "Fingal",
        "Firozhan",
        "Fitzedward",
        "Fitzroy",
        "Flinders",
        "Florimund",
        "Flygare",
        "Forester",
        "Fothergill",
        "Frederic",
        "Fredrik",
        "Freeborn",
        "Freeman",
        "Frey",
        "Fryniwyd",
        "Furnifold",
        "Gadsby",
        "Gaillard",
        "Gairdner",
        "Galdor",
        "Gale",
        "Garet",
        "Gareth",
        "Garrick",
        "Garrott",
        "Garth",
        "Garvin",
        "Garwood",
        "Gassaway",
        "Gaston",
        "Gavin",
        "Gebhard",
        "Geoffrey",
        "Gerard",
        "Gerd",
        "Gerhard",
        "Gerhart",
        "Gerrard",
        "Gerrish",
        "Ghislain",
        "Gholson",
        "Gibbon",
        "Gildersleeve",
        "Gladstone",
        "Glassford",
        "Glendower",
        "Glover",
        "Glyn",
        "Godfrey",
        "Godwin",
        "Golding",
        "Goldwin",
        "Goodhue",
        "Gotthard",
        "Govier",
        "Govind",
        "Gowen",
        "Graham",
        "Greenleaf",
        "Gridley",
        "Griffith",
        "Griggs",
        "Grinling",
        "Griswold",
        "Grover",
        "Gudmundur",
        "Guibert",
        "Guido",
        "Gulian",
        "Gunnar",
        "Gunning",
        "Gunther",
        "Gurney",
        "Gustav",
        "Guthrie",
        "Gutzon",
        "Gywn",
        "Gylian",
        "Haakon",
        "Hablot",
        "Hack",
        "Haddon",
        "Hagar",
        "Haigh",
        "Halbert",
        "Halcyon",
        "Haldane",
        "Hale",
        "Halfdan",
        "Hallock",
        "Hallowell",
        "Halvord",
        "Hamlin",
        "Hamnet",
        "Hanford",
        "Harald",
        "Harbaugh",
        "Harcourt",
        "Hardeman",
        "Hardwicke",
        "Harkness",
        "Harlan",
        "Hartpole",
        "Hartwig",
        "Harwood",
        "Hasket",
        "Hatcher",
        "Havelock",
        "Hazard",
        "Healdon",
        "Heaslip",
        "Hedwig",
        "Helm",
        "Helmer",
        "Heman",
        "Hendrick",
        "Henrick",
        "Hereward",
        "Heron",
        "Heward",
        "Hickling",
        "Hildebrand",
        "Hildreth",
        "Hildric",
        "Hislop",
        "Hjalmar",
        "Hjorth",
        "Hoadley",
        "Hobart",
        "Hodgdon",
        "Hogg",
        "Holbrook",
        "Holger",
        "Hollister",
        "Hookham",
        "Horton",
        "Howarth",
        "Howland",
        "Hrothgar",
        "Hrodnovar",
        "Hudleston",
        "Huffam",
        "Hulbeart",
        "Hultz",
        "Humbert",
        "Hunter",
        "Hurd",
        "Hyder",
        "Hynman",
        "Ilo",
        "Ingham",
        "Ingram",
        "Inigo",
        "Irial",
        "Irvin",
        "Isak",
        "Isambard",
        "Ivor",
        "Izard",
        "Jacoby",
        "Jagadis",
        "Jahverbhai",
        "Janvel",
        "Jawaharial",
        "Jayaprakash",
        "Jenkin",
        "Jephson",
        "Jevan",
        "Jolan",
        "Jotham",
        "Karel",
        "Karker",
        "Kaspar",
        "Kavalam",
        "Kegan",
        "Kelvin",
        "Kemble",
        "Kendall",
        "Kendrick",
        "Kenesaw",
        "Kenrick",
        "Kermit",
        "Kevan",
        "Kian",
        "Kieran",
        "Kilian",
        "Kinloch",
        "Kirk",
        "Kirsopp",
        "Knud",
        "Knut",
        "Konrad",
        "Krishnalai",
        "Krok",
        "Krom",
        "Kuno",
        "Kurd",
        "Kurt",
        "Kyle",
        "Lachlan",
        "Lamar",
        "Langhorne",
        "Langston",
        "Lanthorn",
        "Lardner",
        "Larkin",
        "Lazar",
        "Ledyard",
        "Legrand",
        "Lenox",
        "Leofric",
        "Lewellyn",
        "Lightfoot",
        "Lippard",
        "Liptrot",
        "Littleton",
        "Livermore",
        "Llangewellen",
        "Llewellyn",
        "Lockwood",
        "Lorin",
        "Lothrop",
        "Loudon",
        "Lovegood",
        "Lufkin",
        "Lyndon",
        "Lysander",
        "Lytler",
        "Macallan",
        "Macaulay",
        "Macer",
        "Macklin",
        "Macvey",
        "Maddern",
        "Maddock",
        "Madhao",
        "Magill",
        "Mahlon",
        "Makdougall",
        "Malhar",
        "Malcin",
        "Manfred",
        "Mankey",
        "March",
        "Markham",
        "Marques",
        "Marsden",
        "Marshman",
        "Maxfield",
        "Mayhew",
        "Medart",
        "Megan",
        "Meghnad",
        "Meredith",
        "Mervyn",
        "Methün",
        "Midhat",
        "Milo",
        "Miner",
        "Moffett",
        "Monarch",
        "Montfort",
        "Morgan",
        "Morley",
        "Mungo",
        "Murdo",
        "Murdock",
        "Murrough",
        "Mustafa",
        "Myrick",
        "Nagel",
        "Natty",
        "Negley",
        "Nesbit",
        "Nevile",
        "Newall",
        "Newbold",
        "Newman",
        "Nibbidard",
        "Nichol",
        "Ninian",
        "Norval",
        "Norvin",
        "Norwood",
        "Oakes",
        "Obed",
        "Odd",
        "Odo",
        "Ogden",
        "Oldham",
        "Olof",
        "Onslow",
        "Onufrio",
        "Ordway",
        "Ormsby",
        "Orren",
        "Orridge",
        "Oswin",
        "Otho",
        "Otto",
        "Overton",
        "Owen",
        "Padraic",
        "Paget",
        "Parr",
        "Paschal",
        "Passmore",
        "Pattabhai",
        "Pearsall",
        "Peffer",
        "Peleg",
        "Pelham",
        "Penfield",
        "Penhallow",
        "Penniman",
        "Penrhyn",
        "Pepperell",
        "Peregrine",
        "Perrin",
        "Persifor",
        "Phanuel",
        "Pharamond",
        "Pharcellus",
        "Phelim",
        "Philo",
        "Philpot",
        "Phimister",
        "Pickman",
        "Pigot",
        "Pike",
        "Pinkham",
        "Pinkney",
        "Pinkstone",
        "Plaisted",
        "Plummer",
        "Plinkett",
        "Pollard",
        "Pollock",
        "Polycarp",
        "Pomeroy",
        "Prafulla",
        "Pendergast",
        "Preston",
        "Prichard",
        "Proctor",
        "Pue",
        "Pulteney",
        "Purdon",
        "Pyke",
        "Quan",
        "Quarles",
        "Quixano",
        "Raban",
        "Rabindranath",
        "Ragnal",
        "Ragnar",
        "Raikes",
        "Ralls",
        "Ranald",
        "Ranfurly",
        "Ranjan",
        "Rankin",
        "Rannulf",
        "Rattray",
        "Redcliffe",
        "Rendel",
        "Rhys",
        "Rickard",
        "Ringgold",
        "Roach",
        "Roark",
        "Rockhill",
        "Rodefer",
        "Roderic",
        "Roland",
        "Romer",
        "Romney",
        "Ronan",
        "Root",
        "Roscoe",
        "Rosskeen",
        "Roundell",
        "Rucker",
        "Rudyard",
        "Rufus",
        "Ruggles",
        "Rutland",
        "Sacheverall",
        "Sackville",
        "Sadler",
        "Salmon",
        "Salter",
        "Salwyn",
        "Sandfrid",
        "Sardul",
        "Sawdon",
        "Scudamore",
        "Sechler",
        "Selig",
        "Selwyn",
        "Shackerley",
        "Shadrach",
        "Shadworth",
        "Sibert",
        "Seigfried",
        "Sigfrid",
        "Silban",
        "Slater",
        "Sligh",
        "Slingsby",
        "Smedley",
        "Southall",
        "Sprigg",
        "Stanwood",
        "Starke",
        "Stedman",
        "Stehman",
        "Stenger",
        "Steponas",
        "Sterndale",
        "Stetson",
        "Stetter",
        "Stilingfleet",
        "Stillman",
        "Stopford",
        "Strachan",
        "Stroud",
        "Strudwick",
        "Surridge",
        "Sutan",
        "Svante",
        "Svatopluk",
        "Sveinbjorn",
        "Swain",
        "Swartwout",
        "Sydnor",
        "Tadeus",
        "Taggart",
        "Tasker",
        "Taurus",
        "Tell",
        "Tench",
        "Thacker",
        "Theodric",
        "Thorburn",
        "Thordarson",
        "Thorkild",
        "Thormodr",
        "Thorndike",
        "Thornwell",
        "Thorold",
        "Thorsager",
        "Thorvald",
        "Thorvaldur",
        "Throck",
        "Tilford",
        "Tillinghast",
        "Tilloch",
        "Todhunter",
        "Tolbert",
        "Topham",
        "Trafford",
        "Trelawyn",
        "Trick",
        "Trigg",
        "Trost",
        "Trotwood",
        "Trowbridge",
        "Truesdell",
        "Tufnell",
        "Tunstall",
        "Turhan",
        "Turpin",
        "Tuttle",
        "Tylden",
        "Tyrwhitt",
        "Uhler",
        "Ulric",
        "Ulrich",
        "Unwin",
        "Upton",
        "Usher",
        "Valdemar",
        "Valerand",
        "Vannevar",
        "Vardis",
        "Varnum",
        "Venable",
        "Vicat",
        "Vidkun",
        "Vilhelm",
        "Vincas",
        "Vlasta",
        "Vokos",
        "Volrath",
        "Vyner",
        "Wadleigh",
        "Wager",
        "Wakeman",
        "Waldegrave",
        "Waldemar",
        "Waleran",
        "Walford",
        "Walsham",
        "Waring",
        "Wark",
        "Warrender",
        "Warwick",
        "Watt",
        "Wedlake",
        "Wellborn",
        "Westcott",
        "Whitwell",
        "Wideman",
        "Wightman",
        "Wildhair",
        "Wilfrid",
        "Wilibald",
        "Willock",
        "Windham",
        "Winton",
        "Woart",
        "Wolmar",
        "Woodfin",
        "Woodruff",
        "Woollgar",
        "Worley",
        "Wortley",
        "Wycliffe",
        "Wyly",
        "Wynkyn",
        "Xanthus",
        "Xaver",
        "Xystus",
        "Yandell",
        "Yardley",
        "York",
        "Zabdiel",
        "Zachris",
        "Zadock",
        "Zebulon",
        "Zenon",
        "Zoltan"
    };
    return maleNames;
}

Sex Sex::rollRandomName() {
    int genderChoice = roll(1, 2);

    if (genderChoice == 1) {
        int index = roll(1, getFemaleNames().size()) - 1;
        return Sex(getFemaleNames()[index], "Female", {-2, -2, -2, 2, 0, 4});
    } else {
        int index = roll(1, getMaleNames().size()) - 1;
        return Sex(getMaleNames()[index], "Male", {2, 0, 0, 0, 2, 0});
    }
}

std::string Sex::rollRandomName(const std::string& gender) {
    if (gender == "Male") {
        int index = roll(1, getMaleNames().size()) - 1;
        return getMaleNames()[index];
    } else {
        int index = roll(1, getFemaleNames().size()) - 1;
        return getFemaleNames()[index];
    }
}
